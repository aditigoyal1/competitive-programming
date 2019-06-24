#include<bits/stdc++.h>
using namespace std;

struct Point
{
	int x,y;
	
};

bool tochange(Point p,Point q,Point r)
{
	int x1=q.x-p.x;
	int y1=q.y-p.y;
	int x2=r.x-q.x;
	int y2=r.y-q.y;
	
	int value=x1*y2-y1*x2;
	return value >0;
	}


void convexHull(Point point[],int n)
{
	
	vector<Point> hull;
	int left=0;
	
	for(int i=0;i<n;i++)
	{
		
		if(point[i].x <point[left].x)
		{
			left=i;
			
		}
	}
	
	
int	p=left;
	
	do{
		
		hull.push_back(point[p]);
		
		int q=(p+1)%n;
		for(int i=0;i<n;i++)
		{
			if(tochange(point[p],point[q],point[i]))
			{
				q=i;
				
			}
		}
		
		p=q;
		
		
	}while(p!=left);
	
	
	for(int i=0;i<hull.size();i++)
	{
		cout<<hull[i].x<<" "<<hull[i].y<<endl;
	}
	
	
	





}	
	

int main()
{
	
	int n;
	cin>>n;
	
	Point points[n];
	for(int i=0;i<n;i++)
	{
		cin>>points[i].x;
	}
	for(int i=0;i<n;i++)
	{
		cin>>points[i].y;
	}
	//={ {0,4},{1,1},{2,2},{4,0},{4,4},{0,0},{3,3}};
	
	convexHull(points,7);
	
}


/*7
2 1 6 5 3 7 9
2 5 1 5 7 6 4

ans=1 5
2 2
6 1
9 4
7 6
3 7*/
