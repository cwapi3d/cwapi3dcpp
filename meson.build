project(
  'CwAPI3D',
  version : '33.264.1',
  license : 'MIT',
  meson_version : '>=0.56.0',
)

cwapi3d_include_dir = include_directories('include')

cwapi3d_dep = declare_dependency(
  include_directories : cwapi3d_include_dir,
)

meson.override_dependency('CwAPI3D', cwapi3d_dep)
meson.override_dependency('cwapi3d', cwapi3d_dep)

install_subdir(
  'include/cwapi3d',
  install_dir : get_option('includedir'),
)

pkg = import('pkgconfig')

pkg.generate(
  name : meson.project_name(),
  filebase : 'cwapi3d',
  description : 'Cadwork 3D CwAPI3D plugin architecture C++ headers',
  version : meson.project_version(),
  subdirs : '.',
)
