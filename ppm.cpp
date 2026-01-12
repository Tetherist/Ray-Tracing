#include <iostream>

int main(void)
{
    int img_width = 256;
    int img_height = 256;

    std::cout << "P3" << "\n" << img_width << ' ' << img_height << "\n" << "255" << "\n";

    for (int i = 0; i < img_height; i++)
    {
        std::clog << "\rScanlines remaining: " << (img_height - i) << ' ' << std::flush;
        for (int j = 0; j < img_width; j++)                                                                                                           
        {
            // rgb values range from 0.0 - 1.0, so we divide it by our max_value first (255)
            auto r = double(j) / (img_width - 1);
            auto g = double(i) / (img_height - 1);                                      
            auto b = 0.0;

            // when we need to print it out, we will multiply it by 255.999 to get the int version.
            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            std::cout << ir << " " << ig << " " << ib << "\n";
        }

    }

    std::clog <<"\rDone.                   \n";
}