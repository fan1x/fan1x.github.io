#include <iostream>
#include <vector>
#include <iomanip>

class matrix {
    using value_type = int;
    using row_type = std::vector<value_type>;
    using data_type = std::vector<row_type>;
    using size_type = size_t;
	
	static constexpr size_type INIT_WIDTH = 10;
	static constexpr size_type INIT_HEIGHT = 10;

    data_type data;
public:
    // ctor
    matrix() : matrix(INIT_WIDTH, INIT_HEIGHT) {}

    // ctor
    matrix(size_type width, size_type height, value_type init_value = value_type()) : data(data_type(height, row_type(width, init_value))) {}

    // copy-ctor
    matrix(const matrix &m) : data(m.data) {}
    
	// move-ctor
    matrix(matrix &&m) : data(std::move(m.data)) {}

    size_t width() const {	
        return data.empty() ? 0 : data[0].size();
    }

    size_t height() const {
        return data.size();
    }

    row_type &operator[](size_type height_idx) {
        return data[height_idx];
    }
	const row_type &operator[](size_type height_idx) const {
        return data[height_idx];
    }

    void clear() {
		for (auto &&row : data) {
			for (auto &&element : row) {
				element = value_type();
			}
		}
    }

    void print() const {
		for (auto &&row : data) {
			for (auto &&element : row) {
				std::cout << std::setw(3) << element;
			}
			std::cout << '\n'; // or << std::endl
		}
    }
};

void fill(matrix &m) {
    for (size_t i = 0; i < m.height(); ++i) { // or auto i = 0ul;
        for (size_t j = 0; j < m.width(); ++j) {
            m[i][j] = i*m.width() + j;
        }
    }
}

int main() {
    matrix m;
    fill(m);
    m.print();
    return 0;
}