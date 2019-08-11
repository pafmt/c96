module object;
@nogc nothrow extern (C):


version(LDC)
{
	pragma(LDC_no_moduleinfo);
	pragma(LDC_no_typeinfo);
}
