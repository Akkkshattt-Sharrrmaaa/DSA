#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isSafe(vector<vector<int>> &maze , vector<vector<bool>> &visited , int ratx ,int raty , int rows ,int cols){

    bool cond1 , cond2 , cond3 = false;
    //condition 1 -->> out of bounds 
    if(ratx >= 0 && ratx <rows && raty>=0 && raty<cols) cond1=true;

    //condititon 2 -->> possible move or not ( 1  in maze)
    if(maze[ratx][raty] == 1) cond2=true;

    // condition 3 -->> not visited before ( 0 in the visited cell)
    if(visited[ratx][raty] == 0) cond3=true;


    if(cond1 && cond2 && cond3){
        return true;
    }else{
        return false;
    }

}

void find_paths( vector<vector<int>> &maze , vector<vector<bool>> &visited , int ratx , int raty , int rows, int cols, vector<string> &paths , string sol){

    // base case
    if( ratx == rows-1 && raty == cols-1){
        paths.push_back(sol);
        return;
    }

    // calls
    
    // --> left call
    if(isSafe(maze , visited , ratx , raty-1,rows , cols)){

        // mark visited 
        visited[ratx][raty-1] = true;
        find_paths(maze , visited , ratx, raty-1, rows , cols , paths, sol+"L");
        visited[ratx][raty-1] = false;

    }

    // --> right call
    if(isSafe(maze , visited , ratx , raty+1,rows , cols)){

        // mark visited 
        visited[ratx][raty+1] = true;
        find_paths(maze , visited , ratx, raty-1, rows , cols , paths, sol+"R");
        visited[ratx][raty+1] = false;

    }

    // --> top call
    if(isSafe(maze , visited , ratx-1, raty,rows , cols)){

        // mark visited 
        visited[ratx-1][raty] = true;
        find_paths(maze , visited , ratx-1, raty, rows , cols , paths, sol+"T");
        visited[ratx][raty-1] = false;

    }

    // -- bottom call
    if(isSafe(maze , visited , ratx+1, raty,rows , cols)){

        // mark visited 
        visited[ratx+1][raty] = true;
        find_paths(maze , visited , ratx+1, raty, rows , cols , paths, sol+"B");
        visited[ratx+1][raty] = false;

    }

}

int main(){

    vector<vector<int>> maze = {{1,0,0,0},
                                {1,1,0,0},
                                {1,1,0,0},
                                {0,1,1,0}
    };

    int ratx = 0;
    int raty = 0;

    vector<vector<bool>> visited(4, vector<bool>(4,0));
    visited[0][0] = true;

    vector<string> paths;
    string sol = "";

    cout<<"maze is : "<<endl;
    for( int i =0; i<maze.size(); i++){

        for(int j=0; j<maze[0].size();j++){

            cout<<maze[i][j]<<" ";

        }cout<<endl;
    }

    cout<<"visited matrix is : "<<endl;
    for(int i=0; i<visited.size(); i++){
        for(int j=0; j<visited[0].size(); j++){

            cout<<visited[i][j]<<" ";
        }cout<<endl;
    }


    int rows = maze.size();
    cout<<"no of rows is : "<<rows<<endl;
    int cols = maze[0].size();
    cout<<"no of cols is : "<<cols<<endl;

    find_paths(maze, visited, ratx , raty, rows, cols, paths,sol);

    cout<<"all possible solutions are :"<<endl;
    for(int i =0; i<paths.size(); i++){
        cout<<paths[i]<<endl;
    }

return 0;
}