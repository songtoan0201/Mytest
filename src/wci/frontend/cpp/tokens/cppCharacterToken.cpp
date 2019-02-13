/**
 * <h1>cppStringToken</h1>
 *
 * <p> cpp string tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "cppCharacterToken.h"

#include <string>
#include "../cppError.h"

namespace wci { namespace frontend { namespace cpp { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::cpp;

cppCharacterToken::cppCharacterToken(Source *source) throw (string)
    : cppToken(source)
{
    extract();
}

void cppCharacterToken::extract() throw (string)
{
    char value_char;

    char current_ch = next_char();  // consume initial quote
    text += "'";

    // Get string characters.

	// Replace any whitespace character with a blank.
	if (isspace(current_ch)) current_ch = ' ';

	if(current_ch == '\\')
	{
		text += current_ch;
		current_ch = next_char();
		if(current_ch == 'n')
		{
			text += current_ch;
			value_char = '\n';
			current_ch = next_char();
		}
		else if(current_ch == 't')
		{
			text += current_ch;
			value_char = '\t';
			current_ch = next_char();
		}
		else if(current_ch == '\'')
		{
			text += current_ch;
			value_char = '\'';
			current_ch = next_char();
		}
		else if(current_ch == '\\')
		{
			text += current_ch;
			value_char = '\\';
			current_ch = next_char();
		}

//		text += current_ch;
//			current_ch = next_char();
//			if(current_ch == 'n')
//			{
//				text += current_ch;
//				current_ch = next_char();
//			}
//			else if(current_ch == 't')
//			{
//				text += current_ch;
//				current_ch = next_char();
//			}
//			else if(current_ch == '\'')
//			{
//				text += current_ch;
//				current_ch = next_char();
//			}
//			else if(current_ch == '\\')
//			{
//				text += current_ch;
//				current_ch = next_char();
//			}


	}
	else
	{
		text += current_ch;
		value_char = current_ch;
		current_ch = next_char();
	}

    if (current_ch == '\'')
    {
        next_char();  // consume final quote
        text += '\'';
        type = (TokenType) PT_CHAR;
        value = value_char;
    }
    else
    {
        type = (TokenType) PT_ERROR;
        value = (int) UNEXPECTED_EOF;
    }
}

}}}}  // namespace wci::frontend::cpp::tokens
