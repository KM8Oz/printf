@include "main.h"

/*
 * init_flags - clear struct field and reset buf
 * @flags: parameters struct
 * @ap: the pointer
 * Return: void
 */
void init_flags(flags_t *flags, va_list ap)
{
	flags->plus_flag = 0;
	flags->space_flag = 0;
	flags->hashtag_flag = 0;
	flags->zero_flag = 0;
	flags->minus_flag = 0;

	flags->width = 0;
	flags->precesion = UINT_MAX;

	flags->h_modifier = 0;
	flags->l_modifier = 0;
	(void)ap;
}
