#include <vector> 
#include <iostream>
#include <memory>
#include <functional>
#include <algorithm>
#include <set>
#include <list>
#include <stdexcept>
#include <ranges>
// #include <print>
#include <execution>
#include <mutex>
#include <thread>

using namespace std;

int main(int argc, char *argv[]) {
    constexpr size_t NUM_THREADS = 128;
    constexpr size_t NUM_ITERATIONS = 100;


    cout << "Number of available threads: " << std::thread::hardware_concurrency() << endl;

    std::mutex mtx;
    atomic<int> x = 0;
    std::vector<std::thread> threads;
    
    for (size_t i = 0; i < NUM_THREADS; ++i) {
        threads.emplace_back([&](){
            for (size_t j = 0; j < NUM_ITERATIONS; ++j) {
                // std::lock_guard<std::mutex> lock(mtx);
                x = x + 1;
            }
        });
    }

    // join threads
    for (auto &t : threads) t.join();

    cout << "X=" << x << " (expected: " << NUM_THREADS * NUM_ITERATIONS << ")" << endl;
} 
