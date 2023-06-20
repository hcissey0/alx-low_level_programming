int sum[] = {8, 8, 7, 9, 23, 74};
int *s = sum;
int rand()
{
	int i = *s++;

	return (i);
}
