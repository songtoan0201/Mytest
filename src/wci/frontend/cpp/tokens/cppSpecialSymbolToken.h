/**
 * <h1>cppSpecialSymbolToken</h1>
 *
 * <p> cpp special symbol tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_cpp_TOKENS_cppSPECIALSYMBOLTOKEN_H_
#define WCI_FRONTEND_cpp_TOKENS_cppSPECIALSYMBOLTOKEN_H_

#include <string>

#include "../cppToken.h"

namespace wci { namespace frontend { namespace cpp { namespace tokens {

using namespace std;
using namespace wci::frontend::cpp;

class cppSpecialSymbolToken : public cppToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    cppSpecialSymbolToken(Source *source) throw (string);

protected:
    /**
     * Extract a cpp special symbol token from the source.
     * Override of wci::frontend::Token.
     * @throw a string message if an error occurred.
     */
    void extract() throw (string);
};

}}}}  // namespace wci::frontend::cpp::tokens

#endif /* WCI_FRONTEND_cpp_TOKENS_cppSPECIALSYMBOLTOKEN_H_ */
