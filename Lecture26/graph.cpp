#include<iostream>
#include<list>
using namespace std;

class graph
{
	int v;
	list<int>*adjlist;

public:

	graph(int V)
	{
		v=V;
		adjlist=new list<int>[v];
	}

	void addEdge(int u,int v,bool bidir=true)
	{
		adjlist[u].push_back(v);
		if(bidir)
		{
			adjlist[v].push_back(u);
		}
	}

	void print()
	{
		for(int i=0;i<v;i++)
		{
			cout<<i<<"-->";
			for(auto node:adjlist[i])
			{
				cout<<node<<" ";
			}
			cout<<endl;
		}
	}
};


int main()
{
	graph g(5);
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(3,4);

	g.print();
	return 0;
}

























