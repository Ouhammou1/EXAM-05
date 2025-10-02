#include "vect.hpp"


int main()
{
    vect v1;			// 0,0
	vect v2(1,2);		// 1,2
	const vect v3(v2);	// 1,2
	vect v4 = v2;		// 1,2

	// std::cout << "v1: " << "{" << v1[0] << ", " << v1[1] << "}" << std::endl; // should be the same as above

	std::cout << "v1: " << (v3 == v2)  << std::endl;
	// std::cout << "v2: " << v2 << std::endl;
	// std::cout << "v3: " << v3 << std::endl;
	// std::cout << "v4: " << v4 << std::endl;


    // vect v5 = v3 + v2;
    // vect v6 = v5 - v4;
    // vect v7 = v6 *8;

    // std::cout << "v5: " << v5  << std::endl;
	// std::cout << "v6: " << v6 << std::endl;
	// std::cout << "v7: " << v7 << std::endl;

	// std::cout << "v7++: " << v7++ << std::endl;
	// std::cout << "v7: " << v7 << std::endl;

    // std::cout << "--v5: " << --v5  << std::endl;

    // vect v0 = v1 + v2 -v5;
    // std::cout << "v0 = v1 + v2 - v5 " << v0 << std::endl ;


	// int s = v2[1];
	// v2[1] = 56;
	// int q = v2[1];

	// std::cout << "s= " << s << std::endl;
	// std::cout << "q= " << q << std::endl;


	// int b = v3[1];
	// std::cout << "b = " << b<< std::endl;


	// std::cout << v4++ << std::endl;	// 2,3
	// std::cout << ++v4 << std::endl;	// 3,4
	// std::cout << v4-- << std::endl;	// 2,3
	// std::cout << --v4 << std::endl;	// 1,2

	// v2+=v3;				// 2,4
	// v1-=v2;				// -2,-4
	// v2 = v3 + v3 * 2;	// 3,6
	// v2 = 3 * v2;		// 9,18
	// v2 += v2 += v3;		// 20,40
	// v1 *= 42;			// -84,-168
	// v1 = v1-v1+v1;

	// std::cout << "v1: " << v1 << std::endl;
	// std::cout << "-v2: " << -v2 << std::endl;
	// std::cout << "v1[1]: " << v1[1] << std::endl;

	// v1[1] = 12;
	// std::cout << "v1[1]: " << v1[1] << std::endl;
	// std::cout << "v3[1]: " << v3[1] << std::endl;

	// std::cout << "v1 == v3" << (v1 == v3) << std::endl;
	// std::cout << "v1 == v1" << (v1 == v1) << std::endl;
	// std::cout << "v1 != v3" << (v1 != v3) << std::endl;
	// std::cout << "v1 != v1" << (v1 != v1) << std::endl;

}