#include "main.h"

/**
 * _printf - printf function
 * @format: character string
 * @...: shows function is variadic
 * Return: t_len
 */

int _printf(const char *format, ...)
{
        int t_len = 0;
        va_list value;

        va_start(value, format);
        while (*format != '\0')
        {
                if (*format == '%')
                {
                        format++;
                        switch (*format)
                        {
                                case '%':
                                        t_len += put_char('%');
                                        break;
                                case 'c':
                                        t_len += put_char(va_arg(value, int));
                                        break;
                                case 's':
                                {
                                        char *string = va_arg(value, char *);

                                        if (string == NULL)
                                                t_len += put_str("(nil)");
                                        else
                                                t_len += put_str(string);
                                        break;
                                }
                                default:
                                        t_len += put_char('%');
                                        t_len += put_char(*format);
                                        break;
                        }
                }
                else
                        t_len += put_char(*format);
                format++;
        }
        va_end(value);
        return (t_len);
}
