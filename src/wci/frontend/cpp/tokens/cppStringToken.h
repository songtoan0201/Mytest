/**
 * <h1>cppStringToken</h1>
 *
 * <p> cpp string tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_cpp_TOKENS_cppSTRINGTOKEN_H_
#define WCI_FRONTEND_cpp_TOKENS_cppSTRINGTOKEN_H_

#include <string>

#include "../cppToken.h"

namespace wci { namespace frontend { namespace cpp { namespace tokens {

using namespace std;
using namespace wci::frontend::cpp;

class cppStringToken : public cppToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    cppStringToken(Source *source) throw (string);

protected:
    /**
     * Extract a cpp string token from the source.
     * Override of wci::frontend::Token.
     * @throw a string message if an error occurred.
     */
    void extract() throw (string);
};

}}}}  // namespace wci::frontend::cpp::tokens

#endif /* WCI_FRONTEND_cpp_TOKENS_cppSTRINGTOKEN_H_ */
