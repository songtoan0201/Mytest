/**
 * <h1>cppToken</h1>
 *
 * <p>Base class for cpp token classes.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */

#ifndef WCI_FRONTEND_cpp_cppTOKEN_H_
#define WCI_FRONTEND_cpp_cppTOKEN_H_

#include <string>
#include <map>
#include "../Token.h"
#include "../Source.h"

namespace wci { namespace frontend { namespace cpp {

using namespace std;
using namespace wci::frontend;

/**
 * cpp token types.
 */
enum class cppTokenType
{
    // Reserved words
   /* AND, ARRAY, BEGIN, CASE, CONST, DIV, DO, DOWNTO, ELSE, END,
    FILE, FOR, FUNCTION, GOTO, IF, IN, LABEL, MOD, NIL, NOT,
    OF, OR, PACKED, PROCEDURE, PROGRAM, RECORD, REPEAT, SET,
    THEN, TO, TYPE, UNTIL, VAR, WHILE, WITH, */
	//C++ reserved words
	Auto, Double, Int, Struct,
	Break, Else, Long, Switch,
	Case, Enum, Namespace, Template,
	Char, Extern, Operator, This,
	Class, Float, Protected, Throw,
	Const, For, Public, Union,
	Continue, Goto, Return, Void,
	Do, If, Static, While,

    // Special symbols.
    Negative,Not,At,Mod,Xor,And,Mul,Minus,Plus,
	Equal,Or,Div, Colon,Semicolon, Questionmark,
	Less,Greater,Dot,Comma,Squot,Quot,Left_paran,
	Right_paran, Left_bracket, Right_bracket, Left_brace,
	Right_brace, Incre, Decre, Cout, Cin, Less_Equa, Greater_Equa,
	Plus_equal, Minus_equal, Mul_equal, Div_equal, Equal_equal, Or_equal,
	Mod_equal, And_equal, Xor_equal, Not_equal, Cout_equal, Cin_equal, Or_or,
	And_and, Div_div, Div_star, Star_div,







//	MINUS, STAR, SLASH, COLON_EQUALS,
//    DOT, COMMA, SEMICOLON, COLON, QUOTE,
//    EQUALS, NOT_EQUALS, LESS_THAN, LESS_EQUALS,
//    GREATER_EQUALS, GREATER_THAN, LEFT_PAREN, RIGHT_PAREN,
//    LEFT_BRACKET, RIGHT_BRACKET, LEFT_BRACE, RIGHT_BRACE,
//    UP_ARROW, DOT_DOT,

    IDENTIFIER, INTEGER, REAL, STRING, CHAR,
    ERROR, END_OF_FILE,
};

constexpr cppTokenType PT_Auto = cppTokenType::Auto;
constexpr cppTokenType PT_Double = cppTokenType::Double;
constexpr cppTokenType PT_Int = cppTokenType::Int;
constexpr cppTokenType PT_Struct = cppTokenType::Struct;
constexpr cppTokenType PT_Break = cppTokenType::Break;
constexpr cppTokenType PT_Else = cppTokenType::Else;
constexpr cppTokenType PT_Long = cppTokenType::Long;
constexpr cppTokenType PT_Switch = cppTokenType::Switch;
constexpr cppTokenType PT_Case = cppTokenType::Case;
constexpr cppTokenType PT_Enum = cppTokenType::Enum;
constexpr cppTokenType PT_Namespace = cppTokenType::Namespace;
constexpr cppTokenType PT_Template = cppTokenType::Template;
constexpr cppTokenType PT_Char = cppTokenType::Char;
constexpr cppTokenType PT_Extern = cppTokenType::Extern;
constexpr cppTokenType PT_Operator = cppTokenType::Operator;
constexpr cppTokenType PT_This = cppTokenType::This;
constexpr cppTokenType PT_Class = cppTokenType::Class;
constexpr cppTokenType PT_Float = cppTokenType::Float;
constexpr cppTokenType PT_Protected = cppTokenType::Protected;
constexpr cppTokenType PT_Throw = cppTokenType::Throw;
constexpr cppTokenType PT_Const = cppTokenType::Const;
constexpr cppTokenType PT_For = cppTokenType::For;
constexpr cppTokenType PT_Public = cppTokenType::Public;
constexpr cppTokenType PT_Union = cppTokenType::Union;
constexpr cppTokenType Continue = cppTokenType::Continue;
constexpr cppTokenType PT_Goto = cppTokenType::Goto;
constexpr cppTokenType PT_Return = cppTokenType::Return;
constexpr cppTokenType PT_Void = cppTokenType::Void;
constexpr cppTokenType PT_Do = cppTokenType::Do;
constexpr cppTokenType PT_If = cppTokenType::If;
constexpr cppTokenType PT_Static = cppTokenType::Static;
constexpr cppTokenType PT_While = cppTokenType::While;

constexpr cppTokenType PT_Negative = cppTokenType::Negative;
constexpr cppTokenType PT_Not = cppTokenType::Not;
constexpr cppTokenType PT_At = cppTokenType::At;
constexpr cppTokenType PT_Mod = cppTokenType::Mod;
constexpr cppTokenType PT_Xor = cppTokenType::Xor;
constexpr cppTokenType PT_And = cppTokenType::And;
constexpr cppTokenType PT_Mul = cppTokenType::Mul;
constexpr cppTokenType PT_Minus = cppTokenType::Minus;
constexpr cppTokenType PT_Plus = cppTokenType::Plus;
constexpr cppTokenType PT_Equal = cppTokenType::Equal;
constexpr cppTokenType PT_Or = cppTokenType::Or;
constexpr cppTokenType PT_Div = cppTokenType::Div;
constexpr cppTokenType PT_Colon = cppTokenType::Colon;
constexpr cppTokenType PT_Semicolon = cppTokenType::Semicolon;
constexpr cppTokenType PT_Questionmark = cppTokenType::Questionmark;
constexpr cppTokenType PT_Less = cppTokenType::Less;
constexpr cppTokenType PT_Greater = cppTokenType::Greater;
constexpr cppTokenType PT_Dot = cppTokenType::Dot;
constexpr cppTokenType PT_Comma = cppTokenType::Comma;
constexpr cppTokenType PT_Squot = cppTokenType::Squot;
constexpr cppTokenType PT_Quot = cppTokenType::Quot;
constexpr cppTokenType PT_Left_paran = cppTokenType::Left_paran;
constexpr cppTokenType PT_Right_paran = cppTokenType::Right_paran;
constexpr cppTokenType PT_Left_bracket = cppTokenType::Left_bracket;
constexpr cppTokenType PT_Right_bracket = cppTokenType::Right_bracket;
constexpr cppTokenType PT_Left_brace = cppTokenType::Left_brace;
constexpr cppTokenType PT_Right_brace = cppTokenType::Right_brace;
constexpr cppTokenType PT_Incre = cppTokenType::Incre;
constexpr cppTokenType PT_Decre = cppTokenType::Decre;
constexpr cppTokenType PT_Cout = cppTokenType::Cout;
constexpr cppTokenType PT_Cin = cppTokenType::Cin;
constexpr cppTokenType PT_Less_Equa = cppTokenType::Less_Equa;
constexpr cppTokenType PT_Greater_Equa = cppTokenType::Greater_Equa;
constexpr cppTokenType PT_Plus_equal = cppTokenType::Plus_equal;
constexpr cppTokenType PT_Minus_equal = cppTokenType::Minus_equal;
constexpr cppTokenType PT_Mul_equal = cppTokenType::Mul_equal;
constexpr cppTokenType PT_Div_equal = cppTokenType::Div_equal;
constexpr cppTokenType PT_Equal_equal = cppTokenType::Equal_equal;
constexpr cppTokenType PT_Or_equal = cppTokenType::Or_equal;
constexpr cppTokenType PT_Mod_equal = cppTokenType::Mod_equal;
constexpr cppTokenType PT_And_equal = cppTokenType::And_equal;
constexpr cppTokenType PT_Xor_equal = cppTokenType::Xor_equal;
constexpr cppTokenType PT_Not_equal = cppTokenType::Not_equal;
constexpr cppTokenType PT_Cout_equal = cppTokenType::Cout_equal;
constexpr cppTokenType PT_Cin_equal = cppTokenType::Cin_equal;
constexpr cppTokenType PT_Or_or = cppTokenType::Or_or;
constexpr cppTokenType PT_And_and = cppTokenType::And_and;
constexpr cppTokenType PT_Div_div = cppTokenType::Div_div;
constexpr cppTokenType PT_Div_star = cppTokenType::Div_star;
constexpr cppTokenType PT_Star_div = cppTokenType::Star_div;



//pascal
//constexpr cppTokenType PT_AND = cppTokenType::AND;
//constexpr cppTokenType PT_ARRAY = cppTokenType::ARRAY;
//constexpr cppTokenType PT_BEGIN = cppTokenType::BEGIN;
//constexpr cppTokenType PT_CASE = cppTokenType::CASE;
//constexpr cppTokenType PT_CONST = cppTokenType::CONST;
//constexpr cppTokenType PT_DIV = cppTokenType::DIV;
//constexpr cppTokenType PT_DO = cppTokenType::DO;
//constexpr cppTokenType PT_DOWNTO = cppTokenType::DOWNTO;
//
//constexpr cppTokenType PT_ELSE = cppTokenType::ELSE;
//constexpr cppTokenType PT_END = cppTokenType::END;
//constexpr cppTokenType PT_FILE = cppTokenType::FILE;
//constexpr cppTokenType PT_FOR = cppTokenType::FOR;
//constexpr cppTokenType PT_FUNCTION = cppTokenType::FUNCTION;
//constexpr cppTokenType PT_GOTO = cppTokenType::GOTO;
//constexpr cppTokenType PT_IF = cppTokenType::IF;
//constexpr cppTokenType PT_IN = cppTokenType::IN;
//
//constexpr cppTokenType PT_LABEL = cppTokenType::LABEL;
//constexpr cppTokenType PT_MOD = cppTokenType::MOD;
//constexpr cppTokenType PT_NIL = cppTokenType::NIL;
//constexpr cppTokenType PT_NOT = cppTokenType::NOT;
//constexpr cppTokenType PT_OF = cppTokenType::OF;
//constexpr cppTokenType PT_OR = cppTokenType::OR;
//constexpr cppTokenType PT_PACKED = cppTokenType::PACKED;
//constexpr cppTokenType PT_PROCEDURE = cppTokenType::PROCEDURE;
//
//constexpr cppTokenType PT_PROGRAM = cppTokenType::PROGRAM;
//constexpr cppTokenType PT_RECORD = cppTokenType::RECORD;
//constexpr cppTokenType PT_REPEAT = cppTokenType::REPEAT;
//constexpr cppTokenType PT_SET = cppTokenType::SET;
//constexpr cppTokenType PT_THEN = cppTokenType::THEN;
//constexpr cppTokenType PT_TO = cppTokenType::TO;
//constexpr cppTokenType PT_TYPE = cppTokenType::TYPE;
//
//constexpr cppTokenType PT_UNTIL = cppTokenType::UNTIL;
//constexpr cppTokenType PT_VAR = cppTokenType::VAR;
//constexpr cppTokenType PT_WHILE = cppTokenType::WHILE;
//constexpr cppTokenType PT_WITH = cppTokenType::WITH;
//
//constexpr cppTokenType PT_PLUS = cppTokenType::PLUS;
//constexpr cppTokenType PT_MINUS = cppTokenType::MINUS;
//constexpr cppTokenType PT_STAR = cppTokenType::STAR;
//constexpr cppTokenType PT_SLASH = cppTokenType::SLASH;
//constexpr cppTokenType PT_COLON_EQUALS = cppTokenType::COLON_EQUALS;
//constexpr cppTokenType PT_DOT = cppTokenType::DOT;
//constexpr cppTokenType PT_COMMA = cppTokenType::COMMA;
//constexpr cppTokenType PT_SEMICOLON = cppTokenType::SEMICOLON;
//constexpr cppTokenType PT_COLON = cppTokenType::COLON;
//constexpr cppTokenType PT_QUOTE = cppTokenType::QUOTE;
//constexpr cppTokenType PT_EQUALS = cppTokenType::EQUALS;
//constexpr cppTokenType PT_NOT_EQUALS = cppTokenType::NOT_EQUALS;
//
//constexpr cppTokenType PT_LESS_THAN = cppTokenType::LESS_THAN;
//constexpr cppTokenType PT_LESS_EQUALS = cppTokenType::LESS_EQUALS;
//constexpr cppTokenType PT_GREATER_EQUALS = cppTokenType::GREATER_EQUALS;
//constexpr cppTokenType PT_GREATER_THAN = cppTokenType::GREATER_THAN;
//constexpr cppTokenType PT_LEFT_PAREN = cppTokenType::LEFT_PAREN;
//constexpr cppTokenType PT_RIGHT_PAREN = cppTokenType::RIGHT_PAREN;
//constexpr cppTokenType PT_LEFT_BRACKET = cppTokenType::LEFT_BRACKET;
//constexpr cppTokenType PT_RIGHT_BRACKET = cppTokenType::RIGHT_BRACKET;
//constexpr cppTokenType PT_LEFT_BRACE = cppTokenType::LEFT_BRACE;
//constexpr cppTokenType PT_RIGHT_BRACE = cppTokenType::RIGHT_BRACE;
//constexpr cppTokenType PT_UP_ARROW = cppTokenType::UP_ARROW;
//constexpr cppTokenType PT_DOT_DOT = cppTokenType::DOT_DOT;
//
constexpr cppTokenType PT_IDENTIFIER = cppTokenType::IDENTIFIER;
constexpr cppTokenType PT_INTEGER = cppTokenType::INTEGER;
constexpr cppTokenType PT_REAL = cppTokenType::REAL;
constexpr cppTokenType PT_STRING = cppTokenType::STRING;
constexpr cppTokenType PT_CHAR = cppTokenType::CHAR;
constexpr cppTokenType PT_ERROR = cppTokenType::ERROR;
constexpr cppTokenType PT_END_OF_FILE = cppTokenType::END_OF_FILE;

class cppToken : public Token
{
public:
    static map<string, cppTokenType> RESERVED_WORDS;
    static map<string, cppTokenType> SPECIAL_SYMBOLS;
    static map<cppTokenType, string> SPECIAL_SYMBOL_NAMES;

protected:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    cppToken(Source *source) throw (string);

private:
    static bool INITIALIZED;

    /**
     * Initialize the static maps.
     */
    static void initialize();
};

}}}  // namespace wci::frontend::cpp

#endif /* WCI_FRONTEND_cpp_cppTOKEN_H_ */
