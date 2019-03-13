// array-example.c

int is_prefix_of(
  const char *string,
  int string_length,
  const char *prefix,
  int prefix_length
)
{
  if(prefix_length > string_length) { return 0; }
  // oops, we should have used prefix_length here
  for(int i = 0; i < string_length; ++i)
  {
    // we'll get an out of bounds error here!
    if(prefix[i] != string[i]) { return 0; }
  }
  return 1;
}
