#include<iostream>
using namespace std;
class distance
{
	private:
		float feet;
		float inch;
	
	public:
		get_distance()
		{
			cout<<"Enter value in feet::";
			cin>>feet;
			cout<<"Enter valur in inch::";
			cin>>inch;
		}	
			put_distance()
			{
				cout<<"feet is::"<<feet<<endl;
				cout<<"inch is::"<<inch<<endl;
		    }
}d1;
int main()
{
	d1.get_distance();
	d1.put_distance();
	
	return 0;
}
			