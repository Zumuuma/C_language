//”z—ña‚Ì‘S—v‘f‚Ì•½‹Ï‚ğÀ”‚Å•Ô‚·
double ave_ary(const int a[], int n)
{
	int i;
	double sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum / n;
}