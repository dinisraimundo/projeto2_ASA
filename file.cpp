#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Definitions
    int n_stations, n_connections, n_lines;
    vector<vector<pair<int, int>>> adj_list(n_stations + 1);

    // Input reading
    cin >> n_stations >> n_connections >> n_lines;

    // Vector build
    for (int con = 0; con < n_connections; con++){
        
        int x, y, l;
        cin >> x >> y >> l;
     
        adj_list[x].emplace_back(y, l);
        adj_list[y].emplace_back(x, l);      
    }

    return 0;
}