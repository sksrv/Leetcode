#include <bits/stdc++.h>
using namespace std;

class MovieRentingSystem {
    // price lookup: (shop,movie) -> price
    unordered_map<long long, int> price;

    // available[movie] -> sorted {price, shop}
    unordered_map<int, set<pair<int,int>>> available;

    // rented movies: sorted by {price, shop, movie}
    set<tuple<int,int,int>> rented;

    long long encode(int shop, int movie) {
        return ((long long)shop << 20) | movie; // encode unique key
    }

public:
    MovieRentingSystem(int n, vector<vector<int>>& entries) {
        for (auto &e : entries) {
            int shop = e[0], movie = e[1], cost = e[2];
            price[encode(shop, movie)] = cost;
            available[movie].insert({cost, shop});
        }
    }
    
    vector<int> search(int movie) {
        vector<int> res;
        if (available.count(movie)) {
            int cnt = 0;
            for (auto &p : available[movie]) {
                if (cnt == 5) break;
                res.push_back(p.second); // shop
                cnt++;
            }
        }
        return res;
    }
    
    void rent(int shop, int movie) {
        int cost = price[encode(shop, movie)];
        available[movie].erase({cost, shop});
        rented.insert({cost, shop, movie});
    }
    
    void drop(int shop, int movie) {
        int cost = price[encode(shop, movie)];
        rented.erase({cost, shop, movie});
        available[movie].insert({cost, shop});
    }
    
    vector<vector<int>> report() {
        vector<vector<int>> res;
        int cnt = 0;
        for (auto &t : rented) {
            if (cnt == 5) break;
            auto [cost, shop, movie] = t;
            res.push_back({shop, movie});
            cnt++;
        }
        return res;
    }
};
