project(
    'meson-example',
    'c', 
    version: '0.1.0', 
    default_options: 'default_library=static'
)
openssl_dep = dependency('openssl')
executable('example', 'main.c', dependencies: openssl_dep)
