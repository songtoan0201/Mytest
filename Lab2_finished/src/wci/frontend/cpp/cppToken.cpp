/**
 * <h1>cppToken</h1>
 *
 * <p>Base class for cpp token classes.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "cppToken.h"

#include <string>
#include <vector>
#include <map>

namespace wci { namespace frontend { namespace cpp {

using namespace std;

map<string, cppTokenType> cppToken::RESERVED_WORDS;
map<string, cppTokenType> cppToken::SPECIAL_SYMBOLS;
map<cppTokenType, string> cppToken::SPECIAL_SYMBOL_NAMES;

bool cppToken::INITIALIZED = false;

void cppToken::initialize()
{
    if (INITIALIZED) return;

    vector<string> rw_strings =
    {
//        "AND", "ARRAY", "BEGIN", "CASE", "CONST", "DIV", "DO", "DOWNTO",
//        "ELSE", "END", "FILE", "FOR", "FUNCTION", "GOTO", "IF", "IN",
//        "LABEL", "MOD", "NIL", "NOT", "OF", "OR", "PACKED", "PROCEDURE",
//        "PROGRAM", "RECORD", "REPEAT", "SET", "THEN", "TO", "TYPE",
//        "UNTIL", "VAR", "WHILE", "WITH"
		"auto", "double", "int", "struct",
		"break", "else", "long", "switch",
		"case", "enum", "namespace", "template",
		"char", "extern", "operator", "this",
		"class", "float", "protected", "throw",
		"const", "for", "public", "union",
		"continue", "goto", "return", "void",
		"do", "if", "static", "while"


    };

    vector<cppTokenType> rw_keys =
    {
    		cppTokenType::Auto,
    		cppTokenType::Double,
    		cppTokenType::Int,
    		cppTokenType::Struct,
    		cppTokenType::Break,
    		cppTokenType::Else,
    		cppTokenType::Long,
    	    cppTokenType::Switch,
    		cppTokenType::Case,
    		cppTokenType::Enum,
    		cppTokenType::Namespace,
    		cppTokenType::Template,
    		cppTokenType::Char,
    		cppTokenType::Extern,
    		cppTokenType::Operator,
    		cppTokenType::This,
    		cppTokenType::Class,
    		cppTokenType::Float,
    		cppTokenType::Protected,
    		cppTokenType::Throw,
    		cppTokenType::Const,
    		cppTokenType::For,
    		cppTokenType::Public,
    		cppTokenType::Union,
    		cppTokenType::Continue,
    		cppTokenType::Goto,
    		cppTokenType::Return,
    		cppTokenType::Void,
    		cppTokenType::Do,
    		cppTokenType::If,
    		cppTokenType::Static,
    		cppTokenType::While



//        cppTokenType::AND,
//        cppTokenType::ARRAY,
//        cppTokenType::BEGIN,
//        cppTokenType::CASE,
//        cppTokenType::CONST,
//        cppTokenType::DIV,
//        cppTokenType::DO,
//        cppTokenType::DOWNTO,
//
//        cppTokenType::ELSE,
//        cppTokenType::END,
//        cppTokenType::FILE,
//        cppTokenType::FOR,
//        cppTokenType::FUNCTION,
//        cppTokenType::GOTO,
//        cppTokenType::IF,
//        cppTokenType::IN,
//
//        cppTokenType::LABEL,
//        cppTokenType::MOD,
//        cppTokenType::NIL,
//        cppTokenType::NOT,
//        cppTokenType::OF,
//        cppTokenType::OR,
//        cppTokenType::PACKED,
//        cppTokenType::PROCEDURE,
//
//        cppTokenType::PROGRAM,
//        cppTokenType::RECORD,
//        cppTokenType::REPEAT,
//        cppTokenType::SET,
//        cppTokenType::THEN,
//        cppTokenType::TO,
//        cppTokenType::TYPE,
//
//        cppTokenType::UNTIL,
//        cppTokenType::VAR,
//        cppTokenType::WHILE,
//        cppTokenType::WITH
    };

    for (int i = 0; i < rw_strings.size(); i++)
    {
        RESERVED_WORDS[rw_strings[i]] = rw_keys[i];
    }

    vector<string> ss_strings =
    {
    		"~", "!", "@", "%", "^", "&", "*", "-", "+", "=",
    		"|", "/", ":", ";", "?", "<", ">", ".", ",",
    		"'", "\"", "(",  ")",  "[",  "]", "{", "}",
    		"++", "--", "<<", ">>", "<=", ">=", "+=", "-=", "*=", "/=",
    		"==", "|=", "%=", "&=", "^=", "!=", "<<=", ">>=", "||", "&&",
    		"//", "/*", "*/"
    };

    vector<cppTokenType> ss_keys =
    {


    		cppTokenType::Negative,
    		cppTokenType::Not,
    		cppTokenType::At,
    		cppTokenType::Mod,
    		cppTokenType::Xor,
    		cppTokenType::And,
    		cppTokenType::Mul,
    		cppTokenType::Minus,
    		cppTokenType::Plus,
    		cppTokenType::Equal,
    		cppTokenType::Or,
    		cppTokenType::Div,
    		cppTokenType::Colon,
    		cppTokenType::Semicolon,
    		cppTokenType::Questionmark,
    		cppTokenType::Less,
    		cppTokenType::Greater,
    		cppTokenType::Dot,
    		cppTokenType::Comma,
    		cppTokenType::Squot,
    		cppTokenType::Quot,
    		cppTokenType::Left_paran,
    		cppTokenType::Right_paran,
    		cppTokenType::Left_bracket,
    		cppTokenType::Right_bracket,
    		cppTokenType::Left_brace,
    		cppTokenType::Right_brace,
    		cppTokenType::Incre,
    		cppTokenType::Decre,
    		cppTokenType::Cout,
    		cppTokenType::Cin,
    	    cppTokenType::Less_Equa,
    		cppTokenType::Greater_Equa,
    		cppTokenType::Plus_equal,
    		cppTokenType::Minus_equal,
    		cppTokenType::Mul_equal,
    		cppTokenType::Div_equal,
    		cppTokenType::Equal_equal,
    		cppTokenType::Or_equal,
    		cppTokenType::Mod_equal,
    		cppTokenType::And_equal,
    		cppTokenType::Xor_equal,
    		cppTokenType::Not_equal,
    		cppTokenType::Cout_equal,
    		cppTokenType::Cin_equal,
    		cppTokenType::Or_or,
    		cppTokenType::And_and,
    		cppTokenType::Div_div,
    		cppTokenType::Div_star,
    		cppTokenType::Star_div


//        cppTokenType::PLUS,
//        cppTokenType::MINUS,
//        cppTokenType::STAR,
//        cppTokenType::SLASH,
//        cppTokenType::COLON_EQUALS,
//        cppTokenType::DOT,
//        cppTokenType::COMMA,
//        cppTokenType::SEMICOLON,
//        cppTokenType::COLON,
//        cppTokenType::QUOTE,
//        cppTokenType::EQUALS,
//        cppTokenType::NOT_EQUALS,
//
//        cppTokenType::LESS_THAN,
//        cppTokenType::LESS_EQUALS,
//        cppTokenType::GREATER_EQUALS,
//        cppTokenType::GREATER_THAN,
//        cppTokenType::LEFT_PAREN,
//        cppTokenType::RIGHT_PAREN,
//        cppTokenType::LEFT_BRACKET,
//        cppTokenType::RIGHT_BRACKET,
//        cppTokenType::LEFT_BRACE,
//        cppTokenType::RIGHT_BRACE,
//        cppTokenType::UP_ARROW,
//        cppTokenType::DOT_DOT
    };

    for (int i = 0; i < ss_strings.size(); i++)
    {
        SPECIAL_SYMBOLS[ss_strings[i]] = ss_keys[i];
    }

    vector<string> ss_names =
    {
    	    "Negative", "Not", "At", "Mod", "Xor", "And", "Mul", "Minus", "Plus",
    		"Equal", "Or", "Div", "Colon", "Semicolon", "Questionmark",
    		"Less", "Greater", "Dot","Comma", "Squot", "Quot", "Left_paran",
    		"Right_paran", "Left_bracket", "Right_bracket", "Left_brace",
    		"Right_brace", "Incre", "Decre", "Cout", "Cin", "Less_Equa", "Greater_Equa",
    		"Plus_equal", "Minus_equal", "Mul_equal", "Div_equal", "Equal_equal", "Or_equal",
    		"Mod_equal", "And_equal", "Xor_equal", "Not_equal", "Cout_equal", "Cin_equal", "Or_or",
    		"And_and", "Div_div", "Div_star", "Star_div"

//        "PLUS", "MINUS", "STAR", "SLASH", "COLON_EQUALS", "DOT", "COMMA",
//        "SEMICOLON", "COLON", "QUOTE", "EQUALS", "NOT_EQUALS",
//
//        "LESS_THAN", "LESS_EQUALS", "GREATER_EQUALS", "GREATER_THAN",
//        "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACKET", "RIGHT_BRACKET",
//        "LEFT_BRACE", "RIGHT_BRACE", "UP_ARROW", "DOT_DOT"
    };

    for (int i = 0; i < ss_names.size(); i++)
    {
        SPECIAL_SYMBOL_NAMES[ss_keys[i]] = ss_names[i];
    }

    INITIALIZED = true;
}

cppToken::cppToken(Source *source) throw (string)
    : Token(source)
{
    initialize();
}

}}}  // namespace wci::frontend::cpp
