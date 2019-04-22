# Cassie State Estimation
This repository contains a Matlab/Simulink implementation of the contact-aided invariant extended Kalman filter. The filter was designed for use on a Cassie-series biped robot using Simulink Real-Time. The filter uses IMU, contact, and encoder measurements to estimate the base pose and velocity.

This filter is developed and explained in:
["Contact-aided Invariant Extended Kalman Filtering for Legged Robot State Estimation"](https://arxiv.org/pdf/1805.10410.pdf). Please cite this paper if the filter is being used (the BibTeX entry is located at the bottom of the README).

## Running the example
1. Open Matlab to the "Examples" folder.

2. Execute the scipt "run.m". This will open and run a simulink model with the measurement data stored in the "mat" folder. After the simulation finishes, a few plots will appear analyzing the results of the state estimator.   

3. The filter parameters can be changed in the "Estimators\RightInvariant_EKF\RIEKF_InitFcn.m" script. This script is automatically executed when the simulink model is run.

## Simulink Library 
The simulink library "Libraries\lib_StateEstimation.slx" contains several useful state estimation blocks including the right-invariant extended Kalman filter, a ground reaction force estimator, and a kinematic velocity estimator.

## Tunable Parameters
The following parameters will affect the actual noisy measurements coming into the filter:
* `gyro_true_bias_init` - Initial gyroscope bias 
* `accel_true_bias_init` - Initial accelerometer bias 
* `gyro_true_noise_std` - Standard deviation of noise added to the gyroscope measurement 
* `gyro_true_bias_noise_std` - Standard deviation of noise added to the gyroscope bias 
* `accel_true_noise_std` - Standard deviation of noise added to the accelerometer measurement 
* `accel_true_bias_noise_std` - Standard deviation of noise added to the accelerometer bias 

The following parameters will affect how the filter is run:
* `ekf_update_enabled` - Flag that enables the update phase of the Kalman filter.

The following parameters affect the initial condition and covariances used for the process and measurement models:
* `gyro_noise_std` - Standard deviation of the gyroscope measurement noise
* `gyro_bias_noise_std` - Standard deviation of the gyroscope bias noise
* `accel_noise_std` - Standard deviation of the accelerometer measurement noise
* `accel_bias_noise_std` - Standard deviation the accelerometer bias noise
* `contact_noise_std` - Standard deviation of the contact frame velocity measurement noise
* `encoder_noise_std` - Standard deviation of the joint encoder measurement noise

The following parameters set the initial covariance for the state estimate:
* `prior_base_pose_std` - Initial base orientation and position standard deviation
* `prior_base_velocity_std` - Initial base velocity standard deviation
* `prior_contact_position_std` - Initial contact position standard deviation
* `prior_gyro_bias_std` - Initial gyroscope bias standard deviation
* `prior_accel_bias_std` - Initial accelerometer bias standard deviation
* `prior_forward_kinematics_std` - Additional noise term that is added to increase the forward kinematics measurement covariance


## Citations
The contact-aided invariant extended Kalman filter is described in: 
* R. Hartley, M. G. Jadidi, J. Grizzle, and R. M. Eustice, “Contact-aided invariant extended kalman filtering for legged robot state estimation,” in Proceedings of Robotics: Science and Systems, Pittsburgh, Pennsylvania, June 2018.
```
@INPROCEEDINGS{Hartley-RSS-18, 
    AUTHOR    = {Ross Hartley AND Maani Ghaffari Jadidi AND Jessy Grizzle AND Ryan M Eustice}, 
    TITLE     = {Contact-Aided Invariant Extended Kalman Filtering for Legged Robot State Estimation}, 
    BOOKTITLE = {Proceedings of Robotics: Science and Systems}, 
    YEAR      = {2018}, 
    ADDRESS   = {Pittsburgh, Pennsylvania}, 
    MONTH     = {June}, 
    DOI       = {10.15607/RSS.2018.XIV.050} 
} 
```
The core theory of invariant extended Kalman filtering is presented in:
* Barrau, Axel, and Silvère Bonnabel. "The invariant extended Kalman filter as a stable observer." IEEE Transactions on Automatic Control 62.4 (2017): 1797-1812.
```
@article{barrau2017invariant,
  title={The invariant extended Kalman filter as a stable observer},
  author={Barrau, Axel and Bonnabel, Silv{\`e}re},
  journal={IEEE Transactions on Automatic Control},
  volume={62},
  number={4},
  pages={1797--1812},
  year={2017},
  publisher={IEEE}
}
```
