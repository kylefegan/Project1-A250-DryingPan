
#ifndef GRAPH_H
#define GRAPH_H

#include<iostream>
#include <string>		//Need to include for NULL	
#include <vector>
#include "AnyList.h"
using namespace std;

class Graph
{
public:
	//default constructor
	Graph();

	//overloaded constructor
	Graph(int vectorSize);

	//creates graph
	void createGraph(const vector<vector<string>>& blueprint);

	//copy contructor
	Graph::Graph(const Graph& otherGraph);

	//move constructor
	Graph(Graph&& otherGraph);

	//assignment operator
	Graph& operator =(const Graph& otherGraph);

	//move assignment operator
	Graph& operator =(Graph&& otherGraph);

	//creates graph
	void createGraph(const vector<vector<string>>& blueprint);
	
	//emptys graph
	void emptyGraph();

	//destroys Graph
	void destroyGraph();
	
	//insert new vertex
	void insertVertex(int vertex, const vector<AnyList>& preds, const vector<AnyList>& succs);

	//traverse graph
	void traverse() const;

	//destructor
	//~Graph();

private:
	AnyList **ptrToSucc;
	string *ptrToVerts;
	int verts;
	int capacity;
};

#endif