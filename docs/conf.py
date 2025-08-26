import subprocess, os

read_the_docs_build = os.environ.get('READTHEDOCS', None) == 'True'
if read_the_docs_build:
    subprocess.call('cd ..; doxygen', shell=True)
    subprocess.call('cd ..; doxygen doxyfile_types', shell=True)


# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information

project = 'CwAPI3D'
copyright = '2024, Cadwork'
author = 'Cadwork'
release = '30'

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = ['breathe']

templates_path = ['_templates']
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store', 'venv']

breathe_projects = {"CwAPI3D": "../doxyxml/",
                    "APITypes": "../docTypes/doxyxml/"}
breathe_default_project = "CwAPI3D"

# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_theme = 'sphinx_rtd_theme'
html_static_path = ['_static']
html_title = "CwAPI3D Documentation"
html_theme_options = {
    'navigation_depth': 2,
}
