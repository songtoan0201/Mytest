/**
 * <h1>cppErrorToken</h1>
 *
 * <p>cpp error token.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_cpp_TOKENS_cppERRORTOKEN_H_
#define WCI_FRONTEND_cpp_TOKENS_cppERRORTOKEN_H_

#include <string>

#include "../cppError.h"
#include "../cppToken.h"

namespace wci { namespace frontend { namespace cpp { namespace tokens {

using namespace std;
using namespace wci::frontend::cpp;

class cppErrorToken : public cppToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch subsequent characters.
     * @param errorCode the error code.
     * @param tokenText the text of the erroneous token.
     * @throw a string message if an error occurred.
     */
    cppErrorToken(Source *source, cppErrorCode error_code,
                     string token_text)
        throw (string);

protected:
    /**
     * Do nothing.  Do not consume any source characters.
     * Override of wci::frontend::Token.
     * @throw a string message if an error occurred.
     */
    void extract() throw (string);
};

}}}}  // namespace wci::frontend::cpp::tokens

#endif /* WCI_FRONTEND_cpp_TOKENS_cppERRORTOKEN_H_ */
