#include<iostream>
using namespace std;
int main() {
    int x, y, z, w2;
    int p[500][500];
    int *q, **r;
    int i, j;

    cin >> x >> y >> z >> w2;

    for (i = 0; i < x; ++i)
        for (j = 0; j < y; ++j)
            cin >> p[i][j];
//TEMPLATE BEGIN
int a=0;
	q=new int[x*y];
	for(i=0;i<x;i++)for(j=0;j<y;j++){
		q[a]=p[i][j];
		a++;
	}
	a=0;
	r=new int*[z];
	for(i=0;i<z;i++)r[i]=new int[w2];
	for(i=0;i<z;i++)for(j=0;j<w2;j++){
		r[i][j]=q[a] ;
		a++;	
	}
//TEMPLATE END
    cout << "1D Array(q): " << endl;
    for (i = 0; i < x*y; ++i)
        cout << q[i] << " ";
    cout << endl;

    cout << "2D Array(r): " << endl;
    for (i = 0; i < z; ++i)
    {
        for (int j = 0; j < w2; ++j)
            cout << r[i][j] << " ";
        cout << endl;
    }
	for(i=0;i<w2;i++)delete [] r[i];
	delete [] r;
	delete [] q;
    cout<<"hi";
    return 0;
}
