/**
 * <h1>cppParserTD</h1>
 *
 * <p>The top-down cpp parser.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_cpp_cppPARSERTD_H_
#define WCI_FRONTEND_cpp_cppPARSERTD_H_

#include "../Parser.h"
#include "../Scanner.h"
#include "cppErrorHandler.h"

namespace wci { namespace frontend { namespace cpp {

using namespace std;
using namespace wci::frontend;

class cppParserTD : public Parser
{
public:
    /**
     * Constructor.
     * @param scanner the scanner to be used with this parser.
     */
    cppParserTD(Scanner *scanner);

    /**
     * Constructor for subclasses.
     * @param parent the parent parser.
     */
    cppParserTD(cppParserTD *parent);

    /**
     * Parse a cpp source program and generate the symbol table
     * and the intermediate code.
     * Implementation of wci::frontend::Parser.
     * @throw a string message if an error occurred.
     */
    void parse() throw (string);

    /**
     * Return the number of syntax errors found by the parser.
     * Implementation of wci::frontend::Parser.
     * @return the error count.
     */
    int get_error_count() const;

protected:
    static cppErrorHandler error_handler;
};

}}} // namespace wci::frontend::cpp


#endif /* WCI_FRONTEND_cpp_cppPARSERTD_H_ */
