mkdir build
cd build

CMAKE_CONFIG="Release"

cmake -LAH -G"$CMAKE_GENERATOR" \
  -DCMAKE_BUILD_TYPE=$CMAKE_CONFIG \
  -DCMAKE_INSTALL_PREFIX=$PREFIX \
  -DCMAKE_PREFIX_PATH=$PREFIX \
  -DCMAKE_INSTALL_LIBDIR=lib \
  ..

cmake --build . --config $CMAKE_CONFIG --target install
