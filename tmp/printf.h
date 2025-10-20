int printf(const char *format, ...);
int brbr(const int *format,...);


int scanf(const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __builtin_va_end( __local_argv );
  return __retval;
}