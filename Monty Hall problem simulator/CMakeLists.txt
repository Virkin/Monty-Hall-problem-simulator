# CMakeList.txt : projet CMake pour Monty Hall problem simulator, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

# Ajoutez une source à l'exécutable de ce projet.
add_executable (CMakeTarget "Main.cpp" "Main.hpp" "MontyHall.hpp" "MontyHall.cpp" "Player.cpp" "Player.hpp")

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
