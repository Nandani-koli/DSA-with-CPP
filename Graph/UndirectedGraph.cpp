//Adjacency list of undirected weighted graph for string data

#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Edge
{
public:
    string destVertexName;
    int weight;

    void setEdgeData(string vertexname, int w)
    {
        destVertexName = vertexname;
        weight = w;
    }
};

class Vertex
{
public:
    string vertexname;
    list<Edge> edgelist;
    void setVertexData(string name)
    {
        vertexname = name;
    }
    void printedgelist()
    {
        cout<<"[ ";
        for (auto it : edgelist)
        {
           cout<<"( "<<it.destVertexName<<","<<it.weight<<" ) ";
        }
        cout<<" ]"<<endl;
    }
};
class Graph
{
    vector<Vertex> vertices;

public:
    bool checkifVertexExist(string vname)
    {
        for (int i = 0; i < vertices.size(); i++)
        {
            if (vertices[i].vertexname == vname)
            {
                return true;
            }
        }
        return false;
    }

    void addVertex(string name)
    {
        if (checkifVertexExist(name))
        {
            cout << "Node already exist\n";
            return;
        }
        else
        {
            Vertex v;
            v.setVertexData(name);
            vertices.push_back(v);
            cout << "Node added successfully\n";
        }
    }

    void addEdge(string source, string dest, int weight)
    {
        if (checkifVertexExist(source) && checkifVertexExist(dest))
        {
            for (int i = 0; i < vertices.size(); i++)
            {
                if (vertices[i].vertexname == source)
                {
                    Edge e;
                    e.setEdgeData(dest, weight);
                    vertices[i].edgelist.push_back(e);
                }
                else if (vertices[i].vertexname == dest)
                {
                    Edge e;
                    e.setEdgeData(source, weight);
                    vertices[i].edgelist.push_back(e);
                }
            }
            cout << "Edge added successfully\n";
        }
        else
        {
            cout << "There exist no such node, first create node\n";
        }
    }

    void printGraph()
    {
        for(int i = 0; i<vertices.size(); i++)
        {
            cout<<vertices[i].vertexname<<" -> ";
            vertices[i].printedgelist();
        }
    }

    void printAllNeigborsNode(string name)
    {
        for(int i = 0; i<vertices.size(); i++)
        {
            if(vertices[i].vertexname == name)
            {
            cout<<vertices[i].vertexname<<" -> ";
            vertices[i].printedgelist();
            }
        }
    }
    void checkConnectionOfNode(string node1, string node2)
    {
        for(int i = 0; i<vertices.size(); i++)
        {
            if(vertices[i].vertexname == node1)
            {
                for(auto it : vertices[i].edgelist)
                {
                    if(it.destVertexName == node2)
                    {
                        cout<<"connection from "<<node1<<" to "<<node2<<" is of weight-> "<<it.weight<<endl;
                        break;
                    }
                }
                break;
            }
            else if(vertices[i].vertexname == node2)
            {
                for(auto it : vertices[i].edgelist)
                {
                    if(it.destVertexName == node1)
                    {
                        cout<<"connection from "<<node1<<" to "<<node2<<" is of weight-> "<<it.weight<<endl;
                        break;
                    }
                }
                break;
            }
        }
    }

};

int main()
{
    Graph g;
    g.addVertex("delhi");
    g.addVertex("goa");
    g.addVertex("mh");
    g.addVertex("up");

    g.addEdge("delhi","mh",1300);
    g.addEdge("delhi","goa",1500);
    g.addEdge("delhi","up",300);
    g.addEdge("mh","goa",300);
    g.addEdge("goa","up",1800);

    g.checkConnectionOfNode("mh","up");

    // g.printAllNeigborsNode("delhi");

    // int choice;
    // string name;
    // string source,dest;
    // int weight;
    // Graph g;
    // do
    // {
    //     cout << "0. Exit\n";
    //     cout << "1.Add a node\n";
    //     cout << "2.Add a edge between nodes\n";
    //     cout << "3.Print Graph\n";

    //     cin>>choice;
    //     switch (choice)
    //     {
    //     case 0: 
    //         break;
    //     case 1:
    //         cout<<"enter node name-> ";
    //         cin>>name;
    //         // v1.setVertexData(name);
    //         g.addVertex(name);
    //         break;
        
    //     case 2:
    //         cout<<"Enter Source,Destination node and weight-> ";
    //         cin>>source>>dest>>weight;
    //         g.addEdge(source,dest,weight);
    //         break;

    //     case 3:
    //         g.printGraph();
    //         break;

    //     default:
    //         break;
    //     }
    // } while (choice != 0);
}

/* 
OUTPUT->
0. Exit
1.Add a node
2.Add a edge between nodes
3.Print Graph

3

dh -> [ ( mh,1300 ) ( up,300 ) ( goa,1500 )  ]
mh -> [ ( dh,1300 ) ( goa,300 )  ]
up -> [ ( dh,300 ) ( goa,1800 ) ( odd,700 )  ]
goa -> [ ( dh,1500 ) ( mh,300 ) ( up,1800 ) ( odd,800 )  ]
odd -> [ ( goa,800 ) ( up,700 )  ]
*/