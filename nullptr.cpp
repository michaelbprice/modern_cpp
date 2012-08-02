#ifndef WIN32
#define NULL 0
#endif // WIN32

bool ambig (int i);
bool ambig (char * v);

void nothingness ()
{
    int * _i = NULL;
    int * i  = nullptr;

    int _j = NULL;
    //int j = nullptr; // ERROR!!!

    if (ambig(0)) { } // ambig(int)

    if (ambig(NULL)) { } // ambig(int) when NULL=0
    	                 // ambiguous when NULL=0L

    if (ambig(nullptr)) { } // ambig(char*)
    
}