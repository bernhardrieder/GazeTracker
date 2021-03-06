#pragma once
namespace gt
{
	class Camera
	{
	public:
		Camera(int cameraIndex, int width, int height, bool autoInit = true);
		~Camera();

		cv::Mat GetFrame() const;
		cv::Mat GetFrame(bool inGray, bool flipped = false) const;
		static void ConvertToGray(cv::Mat& frame);
		static void Flip(cv::Mat& frame);
		cv::Ptr<cv::VideoCapture> GetCamera() const;
		bool IsInitialized() const;
		bool Initialize();

		void setCameraIndex(int index)
		{
			m_CameraIndex = index;
		}

	private:
		cv::Ptr<cv::VideoCapture> m_Camera;
		bool m_IsInitialized = false;
		int m_Width;
		int m_Height;
		int m_CameraIndex;
	};
}

