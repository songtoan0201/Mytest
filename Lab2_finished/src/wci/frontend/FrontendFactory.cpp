/**
 * <h1>FrontendFactory</h1>
 *
 * <p>A factory class that creates parsers for specific source languages.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include "FrontendFactory.h"
#include "Parser.h"
#include "Scanner.h"
#include "Source.h"
#include "cpp/cppParserTD.h"
#include "cpp/cppScanner.h"

namespace wci { namespace frontend {

using namespace wci::frontend::cpp;

Parser *FrontendFactory::create_parser(string language, string type,
                                       Source *source)
    throw (string)
{
    if ((language == "C++") && (type == "top-down"))
    {
        Scanner *scanner = new cppScanner(source);
        return new cppParserTD(scanner);
    }
    else if (language != "C++") {
        throw new string("C++ factory: Invalid language '" +
                         language + "'");
    }
    else {
        throw new string("C++ factory: Invalid type '" +
                         type + "'");
    }
}

}} // namespace wci::frontend
