source 'git@github.com:Ginger-Labs/CocoaPodSpecs.git'
#need to source the public specs since we specify a private specs
source 'https://github.com/CocoaPods/Specs.git'

abstract_target 'GLOneDriveGraph-Shared' do
    use_frameworks!
    inhibit_all_warnings!

    pod 'AppAuth', '~> 0.9'
    pod 'MSGraphSDK', :path => './msgraph-sdk-ios'
    pod 'GLCore', :git => 'git@github.com:Ginger-Labs/GLCore.git', :branch => '6.6.1-release'
        
    target :'GLOneDrive-iOS' do
        platform :ios, '8.0'
    end
    
    target :'GLOneDrive-OSX' do
        platform :osx, '10.10'
    end
    
    target :'GLOneDriveApp' do
        platform :ios, '8.0'
    end
    
end




