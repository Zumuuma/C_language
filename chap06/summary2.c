//noを記憶して前回の値を返却
int val(int no)
{
	static int v;
	int temp = v;

	v = no;
	return temp;
}