#ifndef _function_like_macro_h
#define _function_like_macro_h

#define ABS(x)({\
	if (x < 0)\
		x = x / (-1);\
	x;\
})

#endif
