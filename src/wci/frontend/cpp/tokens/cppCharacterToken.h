/*
 * cppCharacterToken.h
 *
 *  Created on: Sep 9, 2018
 *      Author: Joel7
 */

#ifndef WCI_FRONTEND_CPP_TOKENS_CPPCHARACTERTOKEN_H_
#define WCI_FRONTEND_CPP_TOKENS_CPPCHARACTERTOKEN_H_

#include <string>

#include "../cppToken.h"

namespace wci { namespace frontend { namespace cpp { namespace tokens {

using namespace std;
using namespace wci::frontend::cpp;

class cppCharacterToken : public cppToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    cppCharacterToken(Source *source) throw (string);

protected:
    /**
     * Extract a cpp string token from the source.
     * Override of wci::frontend::Token.
     * @throw a string message if an error occurred.
     */
    void extract() throw (string);
};

}}}}  // namespace wci::frontend::cpp::tokens



#endif /* WCI_FRONTEND_CPP_TOKENS_CPPCHARACTERTOKEN_H_ */
