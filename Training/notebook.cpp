//CONTAR NUMERO DE UNOS
int count_one (int n){
            while( n )
            {
            n = n&(n-1);
               cont++;
            }
            return cont;
}

//forma rapida de hacer exponentes
int binaryExponentiation(int x,int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)
        return binaryExponentiation(x*x,n/2);
    else                         
        return x*binaryExponentiation(x*x,(n-1)/2);
}
//mayor divisor GCD
int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
//LCM
int LCM(int A, int B){
	//o dividir uno de los dos A ó B
	return A*B/GCD(A,B);
}
//hallar el inverso modular de a % m
int modInverse(int A,int M)
{
    A=A%M;
    for(int B=1;B<M;B++){
        if((A*B)%M == 1)
            return B;
    }
}
//factorizar en primos
int minPrime[n + 1];
for (int i = 2; i * i <= n; ++i) {
    if (minPrime[i] == 0) {         //If i is prime
        for (int j = i * i; j <= n; j += i) {
            if (minPrime[j] == 0) {
                minPrime[j] = i;
            }
        }
    }
}
for (int i = 2; i <= n; ++i) {
    if (minPrime[i] == 0) {
        minPrime[i] = i;
    }
}
vector<int> factorize(int n) {
    vector<int> res;
    while (n != 1) {
        res.push_back(minPrime[n]);
        n /= minPrime[n];
    }
    return res;
}
// C++ program Miller-Rabin primality test
// Utility function to do modular exponentiation.
// It returns (x^y) % p
int power(int x, unsigned int y, int p)
{
    int res = 1;      // Initialize result
    x = x % p;  // Update x if it is more than or
                // equal to p
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
 
// This function is called for all k trials. It returns
// false if n is composite and returns false if n is
// probably prime.
// d is an odd number such that  d*2<sup>r</sup> = n-1
// for some r >= 1
bool miillerTest(int d, int n)
{
    // Pick a random number in [2..n-2]
    // Corner cases make sure that n > 4
    int a = 2 + rand() % (n - 4);
 
    // Compute a^d % n
    int x = power(a, d, n);
 
    if (x == 1  || x == n-1)
       return true;
 
    // Keep squaring x while one of the following doesn't
    // happen
    // (i)   d does not reach n-1
    // (ii)  (x^2) % n is not 1
    // (iii) (x^2) % n is not n-1
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;
 
        if (x == 1)      return false;
        if (x == n-1)    return true;
    }
 
    // Return composite
    return false;
}
 
// It returns false if n is composite and returns true if n
// is probably prime.  k is an input parameter that determines
// accuracy level. Higher value of k indicates more accuracy.
bool isPrime(int n, int k)
{
    // Corner cases
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
 
    // Find r such that n = 2^d * r + 1 for some r >= 1
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
 
    // Iterate given nber of 'k' times
    for (int i = 0; i < k; i++)
         if (miillerTest(d, n) == false)
              return false;
 
    return true;
}


// A C++ program to check if two given line segments intersect
#include <iostream>
using namespace std;
 
struct Point
{
    int x;
    int y;
};
 
// Given three colinear points p, q, r, the function checks if
// point q lies on line segment 'pr'
bool onSegment(Point p, Point q, Point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return true;
 
    return false;
}
 
// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(Point p, Point q, Point r)
{
    // See http://www.geeksforgeeks.org/orientation-3-ordered-points/
    // for details of below formula.
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);
 
    if (val == 0) return 0;  // colinear
 
    return (val > 0)? 1: 2; // clock or counterclock wise
}
 
// The main function that returns true if line segment 'p1q1'
// and 'p2q2' intersect.
bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
    // Find the four orientations needed for general and
    // special cases
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);
 
    // General case
    if (o1 != o2 && o3 != o4)
        return true;
 
    // Special Cases
    // p1, q1 and p2 are colinear and p2 lies on segment p1q1
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
 
    // p1, q1 and p2 are colinear and q2 lies on segment p1q1
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
 
    // p2, q2 and p1 are colinear and p1 lies on segment p2q2
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
 
     // p2, q2 and q1 are colinear and q1 lies on segment p2q2
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;
 
    return false; // Doesn't fall in any of the above cases
}
 
// Driver program to test above functions
int main()
{
    struct Point p1 = {1, 1}, q1 = {10, 1};
    struct Point p2 = {1, 2}, q2 = {10, 2};
 
    doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n";
 
    p1 = {10, 0}, q1 = {0, 10};
    p2 = {0, 0}, q2 = {10, 10};
    doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n";
 
    p1 = {-5, -5}, q1 = {0, 0};
    p2 = {1, 1}, q2 = {10, 10};
    doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n";
 
    return 0;
}


//algo de floyd
1 let dist be a |V| × |V| array of minimum distances initialized to ∞ (infinity)
2 for each vertex v
3    dist[v][v] ← 0
4 for each edge (u,v)
5    dist[u][v] ← w(u,v)  // the weight of the edge (u,v)
6 for k from 1 to |V|
7    for i from 1 to |V|
8       for j from 1 to |V|
9          if dist[i][j] > dist[i][k] + dist[k][j] 
10             dist[i][j] ← dist[i][k] + dist[k][j]
11         end if

//KMP
int bears[200010], elephants[200010];
int back[200010], cont=0;

void kmpPreprocess(int m){
    int i=0, j=-1;
    back[i]=j;
    while (i<m)
    {
        while (j>=0 && elephants[i]!=elephants[j]) j=back[j];
        i++; j++;
        back[i]=j;
    }
}
void kmpSearch(int n, int m){
    int i=0, j=0;
    while (i<n)
    {
        while (j>=0 && bears[i]!=elephants[j]) j=back[j];
        i++; j++;
        if (j==m)
        {
            j=back[j];
        }
    }
}

//TOPO SORT
// A C++ program to print topological sorting of a DAG
#include<iostream>
#include <list>
#include <stack>
using namespace std;
 
// Class to represent a graph
class Graph
{
    int V;    // No. of vertices'
 
    // Pointer to an array containing adjacency listsList
    list<int> *adj;
 
    // A function used by topologicalSort
    void topologicalSortUtil(int v, bool visited[], stack<int> &Stack);
public:
    Graph(int V);   // Constructor
 
     // function to add an edge to graph
    void addEdge(int v, int w);
 
    // prints a Topological Sort of the complete graph
    void topologicalSort();
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
// A recursive function used by topologicalSort
void Graph::topologicalSortUtil(int v, bool visited[], 
                                stack<int> &Stack)
{
    // Mark the current node as visited.
    visited[v] = true;
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            topologicalSortUtil(*i, visited, Stack);
 
    // Push current vertex to stack which stores result
    Stack.push(v);
}
 
// The function to do Topological Sort. It uses recursive 
// topologicalSortUtil()
void Graph::topologicalSort()
{
    stack<int> Stack;
 
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    // Call the recursive helper function to store Topological
    // Sort starting from all vertices one by one
    for (int i = 0; i < V; i++)
      if (visited[i] == false)
        topologicalSortUtil(i, visited, Stack);
 
    // Print contents of stack
    while (Stack.empty() == false)
    {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}
 
// Driver program to test above functions
int main()
{
    // Create a graph given in the above diagram
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
 
    cout << "Following is a Topological Sort of the given graph \n";
    g.topologicalSort();
 
    return 0;
}
//minimun spaning tree
// A C / C++ program for Prim's Minimum Spanning Tree (MST) algorithm. 
// The program is for adjacency matrix representation of the graph
 
#include <stdio.h>
#include <limits.h>
 
// Number of vertices in the graph
#define V 5
 
// A utility function to find the vertex with minimum key value, from
// the set of vertices not yet included in MST
int minKey(int key[], bool mstSet[])
{
   // Initialize min value
   int min = INT_MAX, min_index;
 
   for (int v = 0; v < V; v++)
     if (mstSet[v] == false && key[v] < min)
         min = key[v], min_index = v;
 
   return min_index;
}
 
// A utility function to print the constructed MST stored in parent[]
int printMST(int parent[], int n, int graph[V][V])
{
   printf("Edge   Weight\n");
   for (int i = 1; i < V; i++)
      printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
}
 
// Function to construct and print MST for a graph represented using adjacency
// matrix representation
void primMST(int graph[V][V])
{
     int parent[V]; // Array to store constructed MST
     int key[V];   // Key values used to pick minimum weight edge in cut
     bool mstSet[V];  // To represent set of vertices not yet included in MST
 
     // Initialize all keys as INFINITE
     for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;
 
     // Always include first 1st vertex in MST.
     key[0] = 0;     // Make key 0 so that this vertex is picked as first vertex
     parent[0] = -1; // First node is always root of MST 
 
     // The MST will have V vertices
     for (int count = 0; count < V-1; count++)
     {
        // Pick the minimum key vertex from the set of vertices
        // not yet included in MST
        int u = minKey(key, mstSet);
 
        // Add the picked vertex to the MST Set
        mstSet[u] = true;
 
        // Update key value and parent index of the adjacent vertices of
        // the picked vertex. Consider only those vertices which are not yet
        // included in MST
        for (int v = 0; v < V; v++)
 
           // graph[u][v] is non zero only for adjacent vertices of m
           // mstSet[v] is false for vertices not yet included in MST
           // Update the key only if graph[u][v] is smaller than key[v]
          if (graph[u][v] && mstSet[v] == false && graph[u][v] <  key[v])
             parent[v]  = u, key[v] = graph[u][v];
     }
 
     // print the constructed MST
     printMST(parent, V, graph);
}
 
 
// driver program to test above function
int main()
{
   /* Let us create the following graph
          2    3
      (0)--(1)--(2)
       |   / \   |
      6| 8/   \5 |7
       | /     \ |
      (3)-------(4)
            9          */
   int graph[V][V] = {{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };
 
    // Print the solution
    primMST(graph);
 
    return 0;
}
//componentes fuertemente conexos, kosaraju, tarjan
// C++ Implementation of Kosaraju's algorithm to print all SCCs
#include <iostream>
#include <list>
#include <stack>
using namespace std;
 
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // An array of adjacency lists
 
    // Fills Stack with vertices (in increasing order of finishing
    // times). The top element of stack has the maximum finishing 
    // time
    void fillOrder(int v, bool visited[], stack<int> &Stack);
 
    // A recursive function to print DFS starting from v
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);
    void addEdge(int v, int w);
 
    // The main function that finds and prints strongly connected
    // components
    void printSCCs();
 
    // Function that returns reverse (or transpose) of this graph
    Graph getTranspose();
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
// A recursive function to print DFS starting from v
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 
Graph Graph::getTranspose()
{
    Graph g(V);
    for (int v = 0; v < V; v++)
    {
        // Recur for all the vertices adjacent to this vertex
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            g.adj[*i].push_back(v);
        }
    }
    return g;
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
void Graph::fillOrder(int v, bool visited[], stack<int> &Stack)
{
    // Mark the current node as visited and print it
    visited[v] = true;
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            fillOrder(*i, visited, Stack);
 
    // All vertices reachable from v are processed by now, push v 
    Stack.push(v);
}
 
// The main function that finds and prints all strongly connected 
// components
void Graph::printSCCs()
{
    stack<int> Stack;
 
    // Mark all the vertices as not visited (For first DFS)
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
 
    // Fill vertices in stack according to their finishing times
    for(int i = 0; i < V; i++)
        if(visited[i] == false)
            fillOrder(i, visited, Stack);
 
    // Create a reversed graph
    Graph gr = getTranspose();
 
    // Mark all the vertices as not visited (For second DFS)
    for(int i = 0; i < V; i++)
        visited[i] = false;
 
    // Now process all vertices in order defined by Stack
    while (Stack.empty() == false)
    {
        // Pop a vertex from stack
        int v = Stack.top();
        Stack.pop();
 
        // Print Strongly connected component of the popped vertex
        if (visited[v] == false)
        {
            gr.DFSUtil(v, visited);
            cout << endl;
        }
    }
}
 
// Driver program to test above functions
int main()
{
    // Create a graph given in the above diagram
    Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(3, 4);
 
    cout << "Following are strongly connected components in "
            "given graph \n";
    g.printSCCs();
 
    return 0;
}
//bit masking
//representacion de un estado mediante numeros bienarios
//conjunto partes mediante corrimientos binarios
void possibleSubsets(char A[], int N)
{
        for(int i = 0;i < (1 << N); ++i)
        {
                    cout << A[j] << 
            for(int j = 0;j < N;++j)
                if(i & (1 << j))‘ ‘;
            cout << endl;
    }
}