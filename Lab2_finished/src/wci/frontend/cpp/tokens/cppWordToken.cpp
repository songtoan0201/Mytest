/**
 * <h1>cppWordToken</h1>
 *
 * <p> cpp word tokens (identifiers and reserved words).</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "cppWordToken.h"

#include <iostream>
#include <string>
#include <map>
#include "../cppError.h"

namespace wci { namespace frontend { namespace cpp { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::cpp;

cppWordToken::cppWordToken(Source *source) throw (string)
    : cppToken(source)
{
    extract();
}

/**
 * Extract a cpp word token from the source.
 * @throws Exception if an error occurred.
 */
void cppWordToken::extract() throw (string)
{
    char current_ch = current_char();

    // Get the word characters (letter or digit). The scanner has
    // already determined that the first character is a letter.
    while (isalnum(current_ch) || current_ch == '_')
    {
        text += current_ch;
        current_ch = next_char();  // consume character
    }

    // Is it a reserved word or an identifier?
    //string upper_case = to_upper(text);


    if (cppToken::RESERVED_WORDS.find(text)
            != cppToken::RESERVED_WORDS.end())
    {
        // Reserved word.
        type = (TokenType) cppToken::RESERVED_WORDS[text];
        value = text;
    }
    else
    {
        // Identifier.
        type = (TokenType) PT_IDENTIFIER;
    }
}

}}}}  // namespace wci::frontend::cpp::tokens
