//no���L�����đO��̒l��ԋp
int val(int no)
{
	static int v;
	int temp = v;

	v = no;
	return temp;
}