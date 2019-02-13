/**
 * <h1>cppScanner</h1>
 *
 * <p>The cpp scanner.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "cppScanner.h"

#include <iostream>
#include "../Source.h"
#include "cppError.h"
#include "cppToken.h"
#include "tokens/cppErrorToken.h"
#include "tokens/cppNumberToken.h"
#include "tokens/cppSpecialSymbolToken.h"
#include "tokens/cppStringToken.h"
#include "tokens/cppCharacterToken.h"
#include "tokens/cppWordToken.h"

namespace wci { namespace frontend { namespace cpp {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::cpp::tokens;

cppScanner::cppScanner(Source *source) : Scanner(source)
{
}

Token *cppScanner::extract_token() throw (string)
{
    skip_white_space();

    Token *token;
    char current_ch = current_char();
    string string_ch = " ";

    string_ch[0] = current_ch;



    // Construct the next token.  The current character determines the
    // token type.
    if (current_ch == Source::END_OF_FILE)
    {
        token = nullptr;
    }
    else if (isalpha(current_ch) || current_ch == '_') //Identifier
    {
        token = new cppWordToken(source);
    }
    else if (isdigit(current_ch))  //number
    {
        token = new cppNumberToken(source);
    }
    else if (current_ch == '\'') //character
    {
    	token = new cppCharacterToken(source);
    }
    else if (current_ch == '"') //string
    {
    	token = new cppStringToken(source);
    }
    else if (cppToken::SPECIAL_SYMBOLS.find(string_ch) //special symbol
                != cppToken::SPECIAL_SYMBOLS.end())
    {
        token = new cppSpecialSymbolToken(source);
    }
    else
    {
        token = new cppErrorToken(source, INVALID_CHARACTER, string_ch);
        next_char();  // consume character
    }

    return token;
}

void cppScanner::skip_white_space() throw (string)
{
    char current_ch = current_char();



    while (isspace(current_ch) || (current_ch == '/')) {
        // Start of a comment?
        if (current_ch == '/')
        {
        	current_ch = next_char();
        	//current_ch = current_char();
        	if(current_ch == '/')
            {
        		do
            	{
                	current_ch = next_char();  // consume comment characters
            	} while (current_ch != Source::END_OF_LINE);
            }

            // Found closing '*/'?
            if (current_ch == '*')
            {
            	do
            	{
            	     current_ch = next_char();  // consume comment characters
            	     if(current_ch == '*')
            	     {
            	    	 current_ch = next_char();
            	    	 if (current_ch == '/')
            	    	 {
            	    		 current_ch = next_char();  // consume the '/'
            	    		 break;
            	    	 }
            	     }
            	} while (current_ch != Source::END_OF_FILE);


            }
        }

        // Not a comment.
        else current_ch = next_char();  // consume whitespace character
    }
}

}}} // namespace wci::frontend::cpp
