#ifndef MK1MF_BUILD
    /* auto-generated by util/mkbuildinf.pl for crypto/cversion.c */
    #define CFLAGS cflags
    /*
     * Generate CFLAGS as an array of individual characters. This is a
     * workaround for the situation where CFLAGS gets too long for a C90 string
     * literal
     */
    static const char cflags[] = {
        'c','o','m','p','i','l','e','r',':',' ','c','c',' ','-','I','.',' ','-',
        'I','.','.',' ','-','I','.','.','/','i','n','c','l','u','d','e',' ',' ',
        '-','O','\0'
    };
    #define PLATFORM "platform: dist"
    #define DATE "built on: Thu Jul  5 23:32:10 2018"
#endif
