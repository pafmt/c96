module app;
extern (C) void wait500ms();
extern (C) void outputLED(ubyte cmd);

extern (C) void d_main()
{
    while (1)
    {
        outputLED(1);
        wait500ms();
        outputLED(0);
        wait500ms();
    }
}
