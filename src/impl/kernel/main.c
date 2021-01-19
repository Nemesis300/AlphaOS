#include "print.h"

void kernel_main()
{
    print_clear();
    print_set_color(green, black);
    print_str("\n\n\n\n\n\n");
    print_str("                   $$      $         $$$$$$$$  $      $      $$    \n");
    print_str("                  $  $     $         $      $  $      $     $  $   \n");
    print_str("                 $$$$$$    $         $$$$$$$$  $$$$$$$$    $$$$$$  \n");
    print_str("                $      $   $         $         $      $   $      $ \n");
    print_str("               $        $  $$$$$$$$  $         $      $  $        $\n");
    print_str("\n\n\n\n\n\n");
    // Add any message you want
    print_str("                 Copyright (c) Nemesis300. All rights reserved.");
}