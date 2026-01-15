fucked up and evil function to free memory in a function return

```c
int	whathaveyoudone(void)
{
	char	*a;
	char	*b;
	...
	char	*h;

	a = malloc(828);
	b = malloc(828);
	...
	h = malloc(828);
	
	return (tat(tat(tat(tat(tat(tat(tat(a,b),c),d),e),f),g),h) + returnValue);
}
```
