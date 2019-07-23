# Programming in Python

## Setting up Anaconda and Conda

Anaconda is and environment and package manager. It is what we will use to program in python. To install it, follow this tutorial:

[https://www.digitalocean.com/community/tutorials/how-to-install-anaconda-on-ubuntu-18-04-quickstart](https://www.digitalocean.com/community/tutorials/how-to-install-anaconda-on-ubuntu-18-04-quickstart)


It will also show you how to create a new environment.

Other reference : [https://www.youtube.com/watch?v=23aQdrS58e0](https://www.youtube.com/watch?v=23aQdrS58e0)

For more about Conda, refer to the [cheat sheet](./conda-cheatsheet).

## Jupyter

Jupyter is a coding environment that allows to develop python code easily from the browser. It is automatically installed with Anaconda.

Otherwise, use the following command:
```bash
    conda install jupyter
```  

### open jupyter server in current folder

```bash
    jupyter notebook
```    

## Various issues

### Cryptic error messages and file names

**Be very careful how you name your files**: some names are  used for functions the user has not access to and using them can lead to weird error messages.

### reproducible random (numpy)

When using random array generators, you sometimes want that the array you generate remains the same every time you execute your script. To do that with numpy, simply set the `random.seed` function to a given int.

```python
    mp.random.seed(42)
```  

## Useful links

- plots commands : [https://matplotlib.org/2.0.2/api/pyplot_summary.html](https://matplotlib.org/2.0.2/api/pyplot_summary.html)
- numpy random functions : [https://docs.scipy.org/doc/numpy/reference/routines.random.html](https://docs.scipy.org/doc/numpy/reference/routines.random.html)