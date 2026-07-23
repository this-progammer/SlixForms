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

/*Short*/
class Short : public Element {
public:
    Short( short s );
    ~Short();
};

/*Long*/
class Long : public Element {
public:
    Long( long l );
    ~Long();
};

/*Unsigned*/
class Unsigned : public Element {
public:
    Unsigned( unsigned u );
    ~Unsigned();
};

/*Double*/
class Double : public Element {
public:
    Double( double d );
    ~Double();
};

/*Float*/
class Float : public Element {
public:
    Float( float f );
    ~Float();
};

/*Char*/
class Char : public Element {
public:
    Char( char c );
    Char( const char* c );
    ~Char();
};

/*Int*/
class Int : public Element {
public:
    Int( int n );
    ~Int();
};

/*Directory*/
class Directory : public Element {
public:
    Directory( Char^ path );
    ~Directory();

    void SetDirectoryPath( char path, int max );
    void SetFilterExtension( const char* filter );
    void SetFilterName( const char* name );
    void SetFilterSize( size_t sz );
    void SetDefaultFile( const char* def_file );
    bool Select( const char* sel );
    void Update();
    void SetViewType( int type );
    void SetSelectType( int sel_type );
    int GetViewType();
    int GetSelectType();
    Directory& GetDirectory();
};



#endif 
