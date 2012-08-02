void unicodify ()
{
    const char * iso88591 = "Hello World!";
    const wchar_t * platform_encoding = L"hallå världen";

    // Hallo Welt
    const char * utf8 = u8"\x48\x61\x6C\x6C\x6F"
                        u8"\x20\x57\x65\x6C\x74";

    // Hello World -> Shalom Olam (but in Hebrew script)
    const char16_t * utf16 = u"\u05E9\u05DC\u05D5\u05DD"
                             u"\u05E2\u05D5\u05DC\u05DD";

    // Hello World + some SMP chars (Simplified Chinese)
    const char32_t * utf32 = U"\u4F60\u597D\u4E16\u754C"
                             U"\U00020027\U00020929"
                             U"\U00021A3A\U00021F6B";

}