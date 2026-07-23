/*SlixFormsAPI.h*/

#ifndef SLIX_FORMS_API_
#define SLIX_FORMS_API_

/*Slix*/
namespace Slix
{
    class Element;
};

/*Attribute*/
class Attribute : public Element {
public:
    Attribute( int attrib );
    Attribute( char attrib );
    Attribute( float attrib );
    Attribute( double attrib );
    Attribute( unsigned attrib );
    Attribute( long attrib );
    Attribute( short attrib );
    ~Attribute();

    virtual bool isInt() = 0;
    virtual bool isChar() = 0;
    virtual bool isFloat() = 0;
    virtual bool isDouble() = 0;
    virtual bool isUnsigned() = 0;
    virtual bool isLong() = 0;
    virtual bool isShort() = 0;
};

#endif 
