//no‚ð‹L‰¯‚µ‚Ä‘O‰ñ‚Ì’l‚ð•Ô‹p
int val(int no)
{
	static int v;
	int temp = v;

	v = no;
	return temp;
}