### FSW 2022: Eigen C++ Template Library Techniques for Onboard Numerical Methods - Fluckiger ###
```https://www.youtube.com/watch?v=4bzlMmd67WM```

### Detailed reference material for Eigen ###
```https://cppsecrets.com/users/141731151079711010097114105641121044610510511611446979946105110/C00-EigenIntroduction.php```

### Control System tool box using eigen ###
```https://github.com/ethz-adrl/control-toolbox```

### Use of Eigen for robot control ###
#### Abstract ####
In recent years, deep reinforcement learning methods provide a new realization idea for the motion control of the quadruped robot, which makes the neural network controller have the characteristics of strong adaptability and high stability. In this paper, we propose an end-to-end neural network framework that, contains an estimator network for estimating the robot's ontology states in addition to the critic and actor networks. These states serve as an important observation data for the critic and actor networks. In addition, in order to solve the disadvantage of high cost of neural network training time, we exploit the mechanism of parallel training and deploy the entire training process in GPU, which improves the speed of network convergence. Finally, we reconstruct the forward network on the CPU through the Eigen library, and transfer the model to the real robot, successfully implementing sim-to-real. We demonstrate our model on SDUQuad-48, and experiments show that the learned policy can achieve various dynamic motions with strong robustness.

```https://ieeexplore.ieee.org/document/10011921``

### Linear algebra libraries for embedded systems ###
#### Introduction ####
This is a C-library for linear algebra which are ment to be used for embedded systems such as AVR, PIC, ARM etc. The library is easy built and follows as much as it can the MATLAB/Octave "standard", how to compute and solve matrices. This C-library using Lapack subroutines from Lapack version 3.2.1 and I have change this Lapack library so it don't require a specific CPU/computer or asking for a operative system. I want this library to have 100% portability. MPC example is provided

```https://github.com/DanielMartensson/EmbeddedLapack```
