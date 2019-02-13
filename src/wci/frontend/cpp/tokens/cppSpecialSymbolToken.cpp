/**
 * <h1>cppSpecialSymbolToken</h1>
 *
 * <p> cpp special symbol tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "cppSpecialSymbolToken.h"

#include <string>
#include "../cppError.h"

namespace wci { namespace frontend { namespace cpp { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::cpp;

cppSpecialSymbolToken::cppSpecialSymbolToken(Source *source) throw (string)
    : cppToken(source)
{
    extract();
}

void cppSpecialSymbolToken::extract() throw (string)
{
    char current_ch = current_char();
    bool good_symbol = true;
    text = current_ch;

    switch (current_ch)
    {
        // Single-character special symbols.
        case '~':  case '@':  case ':':  case ';':
        case '?':  case '.': case ',':  case '\'':  case '"':
        case '(':  case ')':  case '[':  case ']':  case '{': case '}':

        {
            next_char();  // consume character
            break;
        }

        // + or ++ or +=
        case '+':
        {
            current_ch = next_char();  // consume ':';


            if (current_ch == '=' ||current_ch == '+'  )
            {
                text += current_ch;
                next_char();  // consume '='
            }

            break;
        }

        // - or -- or -=
        case '-':
        {
            current_ch = next_char();  // consume '<';

            if (current_ch == '-')
            {
                text += current_ch;
                next_char();  // consume '='
            }
            else if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '>'
            }

            break;
        }

        // < or << or <= or <<=
        case '<':
        {
            current_ch = next_char();  // consume '>';

            if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '='
            }
            else if(current_ch == '<')
            {
            	text += current_ch;
            	current_ch = next_char();
            	if(current_ch == '=')
            	{
            		text += current_ch;
					next_char();  // consume '='
            	}
            }

            break;
        }

        // > or >> or >= or >>=
        case '>':
        {
            current_ch = next_char();  // consume '>';

            if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '='
            }
            else if(current_ch == '>')
            {
            	text += current_ch;
            	current_ch = next_char();
            	if(current_ch == '=')
            	{
            		text += current_ch;
					next_char();  // consume '='
            	}
            }

            break;
        }

        // * or *= or */
        case '*':
        {
            current_ch = next_char();  // consume '.';

            if (current_ch == '=' || current_ch == 92)
            {
                text += current_ch;
                next_char();  // consume '.'
            }

            break;
        }

        // / or /= or // or /*
        case '/':
        {
            current_ch = next_char();  // consume '.';

            if (current_ch == '/' || current_ch == '=' || current_ch == '*')
            {
                text += current_ch;
                next_char();  // consume '.'
            }

            break;
        }

        // = or ==
        case '=':
        {
            current_ch = next_char();  // consume '.';

            if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '.'
            }

            break;
        }

        // | or |= or ||
        case '|':
        {
            current_ch = next_char();  // consume '.';

            if (current_ch == '=' || current_ch == '|')
            {
                text += current_ch;
                next_char();  // consume '.'
            }

            break;
        }

        // % or %=
        case '%':
        {
            current_ch = next_char();  // consume '.';

            if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '.'
            }

            break;
        }

        // & or &= or &&
        case '&':
        {
            current_ch = next_char();  // consume '.';

            if (current_ch == '=' || current_ch == '&')
            {
                text += current_ch;
                next_char();  // consume '.'
            }

            break;
        }

        // ^ or ^=
        case '^':
        {
            current_ch = next_char();  // consume '.';

            if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '.'
            }

            break;
        }

        // ! or !=
        case '!':
        {
            current_ch = next_char();  // consume '.';

            if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '.'
            }

            break;
        }






        default:
        {
            next_char();  // consume bad character
            type = (TokenType) (PT_ERROR);
            value = (int) INVALID_CHARACTER;
            good_symbol = false;
        }
    }

    // Set the type if it wasn't an error.
    if (good_symbol) {
        type = (TokenType) (cppToken::SPECIAL_SYMBOLS[text]);
    }
}

}}}}  // namespace wci::frontend::cpp::tokens
